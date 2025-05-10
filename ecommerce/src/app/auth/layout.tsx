'use client'

import React from "react";
import { Provider } from "react-redux";
import store from '@/Store/store'


export default function NavigationLayout({ children }: { children: React.ReactNode }) {
  return (
        <Provider store={store}>
          <main className="app">
            {children}
          </main>
        </Provider>
  );
}