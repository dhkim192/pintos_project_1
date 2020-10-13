#ifndef FIXED_POINT_CALC_H
#define FIXED_POINT_CALC_H

#define FP 1 << 14

int fp_conv_int(int n)
{
  return n * FP;
}

int fp_conv_fp_round_near(int x)
{
  if (x >= 0)
  {
    return (x + FP / 2) / FP;
  }
  else
  {
    return (x - FP / 2) / FP;
  }
}

int fp_conv_fp_round_zero(int x)
{
  return x / FP;
}

int fp_add_fp(int x, int y)
{
  return x + y;
}

int fp_sub_fp(int x, int y)
{
  return x - y;
}

int fp_add_int(int x, int n)
{
  return x + n * FP;
}

int fp_sub_int(int x, int n)
{
  return x - n * FP;
}

int fp_mul_fp(int x, int y)
{
  return ((int64_t) x) * y / FP;
}

int fp_mul_int(int x, int n)
{
  return x * n;
}

int fp_div_fp(int x, int y)
{
  return ((int64_t) x) * FP / y;
}

int fp_div_int(int x, int n)
{
  return x / n;
}

#endif
