/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004907a8 */

int __cdecl FUN_004907a8(int param_1)

{
  int iVar1;
  uint uVar2;
  int local_18;
  int *local_14;
  int local_10;
  int local_c;
  __crt_seh_guarded_call<int> local_5;
  
  local_c = param_1;
  if (param_1 == 0) {
    iVar1 = FUN_00490926('\0');
    return iVar1;
  }
  uVar2 = FUN_004908d2(*(uint *)(param_1 + 0xc));
  if ((char)uVar2 == '\0') {
    return 0;
  }
  local_14 = &local_c;
  local_10 = local_c;
  local_18 = local_c;
  iVar1 = __crt_seh_guarded_call<int>::
          operator()<<lambda_6d20deecaf4856105ebacbad442d1079>,<lambda_9a32fed5bf61b6b509b2d3f6003082a1>&,<lambda_63ea2239ed67c638ddbae41947fdf875>_>
                    (&local_5,(<lambda_6d20deecaf4856105ebacbad442d1079> *)&local_18,
                     (<lambda_9a32fed5bf61b6b509b2d3f6003082a1> *)&local_14,
                     (<lambda_63ea2239ed67c638ddbae41947fdf875> *)&local_10);
  return iVar1;
}

