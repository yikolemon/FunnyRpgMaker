/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180063b2a */

int FUN_180063b2a(longlong *param_1,longlong param_2,uint *param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  undefined1 auStack_68 [44];
  uint local_3c;
  ulonglong local_38;
  
  local_38 = DAT_180402640 ^ (ulonglong)auStack_68;
  lVar3 = *param_1;
  if (lVar3 == param_2) {
    iVar2 = 1;
    goto LAB_180063c4c;
  }
  local_3c = 0;
  iVar1 = FUN_18006416b(lVar3);
  iVar4 = 4;
  iVar2 = iVar4;
  switch(iVar1) {
  case 0:
    iVar2 = 2;
    goto LAB_180063c4c;
  case 1:
    iVar2 = FUN_1800641ae(param_1,param_2,&local_3c);
    break;
  case 2:
    iVar2 = FUN_1800641c5(param_1,param_2,&local_3c);
    break;
  case 3:
    iVar2 = FUN_18006420d(param_1,param_2,&local_3c);
    break;
  case 4:
    iVar2 = FUN_180064277(param_1,param_2,&local_3c);
    break;
  default:
    goto switchD_180063b86_default;
  }
  if (iVar2 == 0) {
    if ((local_3c & 0xfffff800) == 0xd800 || 0x10ffff < local_3c) {
      iVar2 = 5;
    }
    else if (local_3c < 0x80) {
      iVar2 = iVar4;
      if (iVar1 == 1) goto LAB_180063c3e;
    }
    else if (local_3c < 0x800) {
      iVar2 = iVar4;
      if (iVar1 == 2) {
LAB_180063c3e:
        *param_3 = local_3c;
        lVar3 = *param_1 + 1;
        iVar2 = 0;
      }
    }
    else {
      iVar2 = iVar4;
      if (iVar1 == 3 || 0xffff < local_3c) goto LAB_180063c3e;
    }
  }
switchD_180063b86_default:
  *param_1 = lVar3;
LAB_180063c4c:
  if (DAT_180402640 != (local_38 ^ (ulonglong)auStack_68)) {
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(local_38 ^ (ulonglong)auStack_68);
  }
  return iVar2;
}

