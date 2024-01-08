using System.Data.SqlClient;
using Microsoft.Extensions.Configuration;

/*var connectionStringBuilder = new SqlConnectionStringBuilder();
connectionStringBuilder.DataSource = "localhost";
connectionStringBuilder.InitialCatalog = "Academy_21_12_2023";
connectionStringBuilder.IntegratedSecurity = true;
connectionStringBuilder.Pooling = true;

using SqlConnection connection = new SqlConnection(connectionStringBuilder.ConnectionString);
connection.Open();
Console.WriteLine(connection.State);*/

ConfigurationBuilder builder = new();
builder.AddJsonFile("appsettings.json");

var configuration = builder.Build();

using SqlConnection connection = new(configuration.GetConnectionString("Default"));
connection.Open();

using SqlCommand command2 = new("SELECT COUNT(*) FROM Teachers", connection);
object result1 = command2.ExecuteScalar();
Console.WriteLine($"Rows - {result1}");

using SqlCommand command6 = new("SELECT COUNT(DISTINCT L.Id) FROM Lectures LINNER JOIN Teachers T on L.TeacherId = T.IdWHERE T.Name = N'Иван' AND T.Surname = N'Иванов'", connection);
object result2 = command6.ExecuteScalar();
Console.WriteLine($"LecturesCount - {result2}");

using SqlCommand command7 = new("select AVG(T.Salary) from Teachers T INNER JOIN Lectures L ON T.Id = L.TeacherId INNER JOIN Subjects S ON L.SubjectId = S.Id WHERE S.Name = N'Архитектурный рисунок'", connection);
object result3 = command7.ExecuteScalar();
Console.WriteLine($"AverageRate - {result3}");

using SqlCommand command3 = new("insert into Teachers (Name, Surname, Salary) VALUES ('Рустам', 'Нифталиев', 4000 )", connection);
command3.ExecuteNonQuery();

using SqlCommand command4 = new("insert into Teachers (Name, Surname, Salary) VALUES (@Name, @Surname, @Salary)", connection);
command4.Parameters.AddWithValue("@Name", "Эльнур");
command4.Parameters.AddWithValue("@Surname", "Маммедов");
command4.Parameters.AddWithValue("@Salary", "4500");
command4.ExecuteNonQuery();

using SqlCommand command5 = new("DELETE FROM Teachers WHERE ID = 9", connection);
command5.ExecuteNonQuery();

using SqlCommand command8 = new("INSERT INTO Groups (Name, Year, DepartmentId) VALUES ('Группа 606', 1, 1)", connection);
command8.ExecuteNonQuery();

using SqlCommand command = new("SELECT * FROM Groups", connection);
using SqlDataReader reader = command.ExecuteReader();
{
    Console.WriteLine("id\tGroup Number\tYear\tDepartmentId");
    while (reader.Read())
    {
        Console.WriteLine($"{reader[0]}\t{reader[1]}\t{reader[2]}\t{reader[3]}");
    }
}
reader.Close(); // Странный момент заключается в том что using не закрывает Read, хотя SqlDataReader имплементируется от IDisposable