module Doener (mit) where

mit :: String -> IO ()
mit zutat =
  if zutat == "senf"
  then putStrLn "Döner mit Senf"
  else return ()