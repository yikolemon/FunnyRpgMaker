/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180174fdc */

undefined8 FUN_180174fdc(longlong param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  char *pcVar7;
  int iVar8;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined1 local_3c [4];
  ulonglong local_38;
  
  local_38 = DAT_180402640 ^ (ulonglong)auStack_68;
  uVar3 = *(ulonglong *)(param_1 + 0xc0);
  iVar8 = 0x5c;
  do {
    if (uVar3 < *(ulonglong *)(param_1 + 200)) {
LAB_18017502a:
      uVar3 = uVar3 + 1;
      *(ulonglong *)(param_1 + 0xc0) = uVar3;
    }
    else if (*(int *)(param_1 + 0x30) != 0) {
      FUN_180176673(param_1);
      uVar3 = *(ulonglong *)(param_1 + 0xc0);
      goto LAB_18017502a;
    }
    iVar8 = iVar8 + -1;
  } while (iVar8 != 0);
  iVar8 = FUN_180177505(param_1);
  iVar1 = FUN_180177505(param_1);
  if (*(longlong *)(param_1 + 0x10) == 0) {
LAB_180175069:
    if (*(ulonglong *)(param_1 + 0xc0) < *(ulonglong *)(param_1 + 200)) goto LAB_18017507d;
LAB_180175143:
    pcVar7 = "bad file";
  }
  else {
    iVar2 = (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x28));
    if (iVar2 != 0) {
      if (*(int *)(param_1 + 0x30) != 0) goto LAB_180175069;
      goto LAB_180175143;
    }
LAB_18017507d:
    iVar2 = FUN_180178f1f(iVar8,iVar1,4,0);
    if (iVar2 == 0) {
      pcVar7 = "too large";
    }
    else {
      FUN_1801774e1(param_1);
      FUN_180177505(param_1);
      FUN_180177505(param_1);
      lVar4 = FUN_180178ee1(iVar8,iVar1,4,0);
      if (lVar4 != 0) {
        FUN_1802a89a0(lVar4,0xff,iVar8 * iVar1 * 4);
        local_48 = lVar4;
        lVar5 = FUN_18017a6c0(param_1,iVar8,iVar1,local_3c);
        if (lVar5 == 0) {
          thunk_FUN_180290e40(lVar4);
          lVar4 = 0;
        }
        *param_2 = iVar8;
        *param_3 = iVar1;
        if (DAT_180402640 == (local_38 ^ (ulonglong)auStack_68)) {
          uVar6 = FUN_18017710b(lVar4,4,iVar8,iVar1);
          return uVar6;
        }
        goto LAB_180175184;
      }
      pcVar7 = "outofmem";
    }
  }
  FUN_1801765d0(pcVar7);
  if (DAT_180402640 == (local_38 ^ (ulonglong)auStack_68)) {
    return 0;
  }
LAB_180175184:
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_38 ^ (ulonglong)auStack_68);
}

