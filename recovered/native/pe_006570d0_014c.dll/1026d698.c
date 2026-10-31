/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1026d698 */

int FUN_1026d698(int param_1)

{
  char cVar1;
  int iVar2;
  int local_18;
  int *local_14;
  int local_10;
  int local_c;
  __crt_seh_guarded_call<int> local_5;
  
  local_c = param_1;
  if (param_1 == 0) {
    iVar2 = FUN_1026d816(0);
    return iVar2;
  }
  cVar1 = FUN_1026d7c2(*(undefined4 *)(param_1 + 0xc));
  if (cVar1 == '\0') {
    return 0;
  }
  local_14 = &local_c;
  local_10 = local_c;
  local_18 = local_c;
  iVar2 = __crt_seh_guarded_call<int>::
          operator()<<lambda_6d20deecaf4856105ebacbad442d1079>,<lambda_9a32fed5bf61b6b509b2d3f6003082a1>&,<lambda_63ea2239ed67c638ddbae41947fdf875>_>
                    (&local_5,(<lambda_6d20deecaf4856105ebacbad442d1079> *)&local_18,
                     (<lambda_9a32fed5bf61b6b509b2d3f6003082a1> *)&local_14,
                     (<lambda_63ea2239ed67c638ddbae41947fdf875> *)&local_10);
  return iVar2;
}

