import React from 'react'
import { useState, useRef } from 'react';
import '../styles/App.css';

export default function Timer() {
    const [time, setTime] = useState(0);
    const [timer, setTimer] = useState(null);
    const [isRunning, setIsRunning] = useState(false);
    const inputRef = useRef(null);
  
    const startTimer = () => {
      if (isRunning || time <= 0) return;
  
      setIsRunning(true);
      const interval = setInterval(() => {
        setTime(prevTime => {
          if (prevTime <= 1) {
            clearInterval(interval);
            setIsRunning(false);
            return 0;
          }
          return prevTime - 1;
        });
      }, 1000);
      setTimer(interval);
    };
  
    const stopTimer = () => {
      if (!isRunning) return;  
      clearInterval(timer);
      setIsRunning(false);
    };
  
    const resetTimer = () => {
      clearInterval(timer);
      setIsRunning(false);
      setTime(0);
    };
  
    const handleChange = (event) => {
      setTime(Number(event.target.value));
    };
  
    return (
      <div className="Timer">
        <h1>Countdown timer</h1>
        <input
          type="number"
          ref={inputRef}
          placeholder="Введите время в секундах"
          onChange={handleChange}
          disabled={isRunning}
        />
        <div>
          <button onClick={startTimer} disabled={isRunning}>Start</button>
          <button onClick={stopTimer} disabled={!isRunning}>Stop</button>
          <button onClick={resetTimer}>Reset</button>
        </div>
        <h2>Time left: {time} seconds</h2>
      </div>
    );
}

