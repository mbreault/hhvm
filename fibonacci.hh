<?hh // strict

function fibonacci(int $number): int {
  return \intval(\round(\pow((\sqrt(5.0) + 1) / 2, $number) / \sqrt(5.0)));
}

<<__EntryPoint>>
function main(): noreturn {
  $n = 10;
  print ($n. " in fibonacci is ". fibonacci($n). "\n");
  exit(0);
}