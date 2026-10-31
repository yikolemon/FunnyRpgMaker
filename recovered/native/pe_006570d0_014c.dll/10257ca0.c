/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10257ca0 */

/* WARNING: Removing unreachable block (ram,0x10257d48) */

int FUN_10257ca0(byte *param_1,int *param_2,undefined4 param_3,undefined4 *param_4)

{
  byte *pbVar1;
  int iVar2;
  undefined4 *puVar3;
  byte bVar4;
  byte *pbVar5;
  ulonglong uVar6;
  int local_c;
  int *local_8;
  
  local_8 = &local_c;
  if (param_2 != (int *)0x0) {
    local_8 = param_2;
  }
  iVar2 = _isspace((uint)*param_1);
  pbVar5 = param_1;
  while (iVar2 != 0) {
    pbVar1 = pbVar5 + 1;
    pbVar5 = pbVar5 + 1;
    iVar2 = _isspace((uint)*pbVar1);
  }
  bVar4 = *pbVar5;
  if ((bVar4 == 0x2d) || (bVar4 == 0x2b)) {
    pbVar5 = pbVar5 + 1;
  }
  else {
    bVar4 = 0x2b;
  }
  uVar6 = FUN_10257da0(pbVar5,local_8,param_3,param_4);
  iVar2 = (int)uVar6;
  if (pbVar5 == (byte *)*local_8) {
    *local_8 = (int)param_1;
LAB_10257d16:
    if (uVar6 != 0) goto LAB_10257d4c;
  }
  else if (param_1 == (byte *)*local_8) goto LAB_10257d16;
  if (bVar4 == 0x2b) {
    if (0x7fffffffffffffff < uVar6) {
LAB_10257d4c:
      puVar3 = (undefined4 *)FUN_10268ffd();
      *puVar3 = 0x22;
      if (param_4 != (undefined4 *)0x0) {
        *param_4 = 1;
      }
      if (bVar4 == 0x2d) {
        return 0;
      }
      return -1;
    }
    if (0x7ffffffeffffffff < uVar6) {
      return iVar2;
    }
  }
  else if (bVar4 == 0x2d) {
    if (0x8000000000000000 < uVar6) goto LAB_10257d4c;
    iVar2 = -iVar2;
  }
  return iVar2;
}

