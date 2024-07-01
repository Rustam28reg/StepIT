import React from 'react'
import '../styles/Blog.css'

const blogPosts = [
    {
      title: "Understanding React",
      content: "React is a JavaScript library for building user interfaces...",
      date: "2024-07-01",
      tags: ["React", "JavaScript", "Web Development"]
    },
    {
      title: "Getting Started with Node.js",
      content: "Node.js is a runtime environment that lets you run JavaScript on the server...",
      date: "2024-06-15",
      tags: ["Node.js", "JavaScript", "Backend"]
    },
    {
      title: "CSS Grid Layout",
      content: "CSS Grid Layout is a two-dimensional layout system for the web...",
      date: "2024-06-20",
      tags: ["CSS", "Web Design", "Frontend"]
    }
  ];

export default function Blog() {
  return (
    <div className="Blog">
      <h1>Blog</h1>
      <div className="blog-posts">
        {blogPosts.map((post, index) => (
          <div key={index} className="blog-post">
            <h2>{post.title}</h2>
            <p>{post.content}</p>
            <p><strong>Publication date:</strong> {post.date}</p>
            <div className="tags">
              <strong style={{marginRight: "5px"}}>Tags:</strong>
              {post.tags.map((tag, idx) => (
                <span key={idx} className="tag">{tag}</span>
              ))}
            </div>
          </div>
        ))}
      </div>
    </div>

  )
}
