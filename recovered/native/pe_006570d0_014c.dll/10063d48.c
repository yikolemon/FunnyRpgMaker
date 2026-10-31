/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10063d48 */

int FUN_10063d48(int *param_1,int param_2,uint *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  uint local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_18;
  iVar3 = *param_1;
  if (iVar3 == param_2) {
    iVar2 = 1;
    goto switchD_10063d86_caseD_0;
  }
  local_18 = 0;
  iVar1 = FUN_10064403(iVar3);
  iVar2 = 2;
  switch(iVar1) {
  case 0:
    goto switchD_10063d86_caseD_0;
  case 1:
    iVar2 = FUN_10064448(param_1,param_2,&local_18);
    break;
  case 2:
    iVar2 = FUN_10064464(param_1,param_2,&local_18);
    break;
  case 3:
    iVar2 = FUN_100644a9(param_1,param_2,&local_18);
    break;
  case 4:
    iVar2 = FUN_1006450b(param_1,param_2,&local_18);
    break;
  default:
    iVar2 = 4;
    goto LAB_10063e35;
  }
  if (iVar2 == 0) {
    if ((local_18 & 0xfffff800) == 0xd800 || 0x10ffff < local_18) {
      iVar2 = 5;
    }
    else {
      if (local_18 < 0x80) {
        bVar4 = iVar1 == 1;
      }
      else if (local_18 < 0x800) {
        bVar4 = iVar1 == 2;
      }
      else {
        bVar4 = iVar1 == 3 || 0xffff < local_18;
      }
      iVar2 = 4;
      if (bVar4) {
        *param_3 = local_18;
        iVar3 = *param_1 + 1;
        iVar2 = 0;
      }
    }
  }
LAB_10063e35:
  *param_1 = iVar3;
switchD_10063d86_caseD_0:
  if (DAT_10388d00 != (local_14 ^ (uint)&local_18)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return iVar2;
}

