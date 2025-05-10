import Navbar from "@/components/layout/header";

interface NavigationLayoutProps {
  children: React.ReactNode
}

export default function NavigationLayout({children}: NavigationLayoutProps)
 {
  return (
    <>
      <Navbar />
      {children}
    </>
  );
}
