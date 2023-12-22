using AbstractFactory.Classes;

var client = new Client();

var iosFactory = new IOSFactory();
client.DisplayUI(iosFactory);

var linuxFactory = new LinuxFactory();
client.DisplayUI(linuxFactory);