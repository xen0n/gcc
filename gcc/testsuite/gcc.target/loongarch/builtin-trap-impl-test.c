#ifdef BUILTIN_TRAP_IMPL_TEST
int
bug (void)
{
  return *(int *)0;
}
#endif

int dummy;
