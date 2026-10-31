/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801eaca8 */

void FUN_1801eaca8(longlong param_1,longlong param_2,longlong *param_3)

{
  short sVar1;
  short sVar2;
  longlong lVar3;
  int iVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  undefined1 auStack_88 [32];
  longlong local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  int local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_180402640 ^ (ulonglong)auStack_88;
  lVar3 = *(longlong *)(param_1 + 8);
  lVar7 = *(longlong *)(*(longlong *)(param_2 + 0x80) + 0x38);
  local_4c = 0;
  local_50 = 0;
  sVar1 = *(short *)(lVar7 + 0xc);
  sVar2 = *(short *)(lVar3 + 0x300);
  iVar8 = *(int *)(param_2 + 0x68);
  local_58 = 0;
  local_60 = 0x10000;
  if (((short)iVar8 == 0) ||
     (*(code **)((&PTR_DAT_180333c00)[*(int *)(*param_3 + 4)] + 0x28) == (code *)0x0))
  goto LAB_1801eae82;
  local_68 = *(longlong *)(param_2 + 0x78);
  (**(code **)((&PTR_DAT_180333c00)[*(int *)(*param_3 + 4)] + 0x28))(param_3,&local_50,&local_4c);
  if ((sVar1 == sVar2) && ((local_4c < 1 || (local_4c == *(int *)(lVar3 + 0x304))))) {
LAB_1801eadb6:
    if ((0 < local_50) && (local_50 != *(int *)(lVar3 + 0x308))) goto LAB_1801eadd5;
  }
  else {
    iVar4 = FUN_1801ebafc(param_1,param_2);
    lVar6 = (longlong)iVar4 * (longlong)*(int *)(lVar7 + 0x10);
    *(int *)(lVar3 + 0x304) = local_4c;
    *(undefined2 *)(lVar3 + 0x300) = *(undefined2 *)(lVar7 + 0xc);
    *(int *)(lVar3 + 0x30c) =
         (int)((ulonglong)(lVar6 + (lVar6 >> 0x3f) + 0x8000) >> 0x10) + 0x8000 >> 0x10;
    if (sVar1 == sVar2) goto LAB_1801eadb6;
LAB_1801eadd5:
    iVar8 = iVar8 * 0x10000;
    iVar4 = FUN_1801ebafc(param_1,param_2,local_50);
    lVar6 = (longlong)*(int *)(lVar7 + 0x14) * (longlong)iVar4;
    *(int *)(lVar3 + 0x308) = local_50;
    *(undefined2 *)(lVar3 + 0x300) = *(undefined2 *)(lVar7 + 0xc);
    *(int *)(lVar3 + 0x310) =
         (int)((ulonglong)(lVar6 + (lVar6 >> 0x3f) + 0x8000) >> 0x10) + 0x8000 >> 0x10;
    uVar5 = FUN_1801cc3a4((iVar8 - iVar4) + -0x80000,iVar8);
    *(undefined4 *)(lVar3 + 0x314) = uVar5;
  }
  lVar7 = local_68 + 0x98;
  FUN_1801cd907(lVar7,*(undefined4 *)(lVar3 + 0x30c),*(undefined4 *)(lVar3 + 0x310));
  local_54 = *(undefined4 *)(lVar3 + 0x314);
  FUN_1801cb555(lVar7);
LAB_1801eae82:
  if (DAT_180402640 != (local_48 ^ (ulonglong)auStack_88)) {
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(local_48 ^ (ulonglong)auStack_88);
  }
  return;
}

