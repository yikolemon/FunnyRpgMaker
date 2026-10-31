/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14013a394 */

void FUN_14013a394(longlong param_1,longlong param_2,longlong *param_3)

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
  
  local_48 = DAT_140f17b40 ^ (ulonglong)auStack_88;
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
     (*(code **)((&PTR_DAT_140e97f60)[*(int *)(*param_3 + 4)] + 0x28) == (code *)0x0))
  goto LAB_14013a56e;
  local_68 = *(longlong *)(param_2 + 0x78);
  (**(code **)((&PTR_DAT_140e97f60)[*(int *)(*param_3 + 4)] + 0x28))(param_3,&local_50,&local_4c);
  if ((sVar1 == sVar2) && ((local_4c < 1 || (local_4c == *(int *)(lVar3 + 0x304))))) {
LAB_14013a4a2:
    if ((0 < local_50) && (local_50 != *(int *)(lVar3 + 0x308))) goto LAB_14013a4c1;
  }
  else {
    iVar4 = FUN_14013b1e8(param_1,param_2);
    lVar6 = (longlong)iVar4 * (longlong)*(int *)(lVar7 + 0x10);
    *(int *)(lVar3 + 0x304) = local_4c;
    *(undefined2 *)(lVar3 + 0x300) = *(undefined2 *)(lVar7 + 0xc);
    *(int *)(lVar3 + 0x30c) =
         (int)((ulonglong)(lVar6 + (lVar6 >> 0x3f) + 0x8000) >> 0x10) + 0x8000 >> 0x10;
    if (sVar1 == sVar2) goto LAB_14013a4a2;
LAB_14013a4c1:
    iVar8 = iVar8 * 0x10000;
    iVar4 = FUN_14013b1e8(param_1,param_2,local_50);
    lVar6 = (longlong)*(int *)(lVar7 + 0x14) * (longlong)iVar4;
    *(int *)(lVar3 + 0x308) = local_50;
    *(undefined2 *)(lVar3 + 0x300) = *(undefined2 *)(lVar7 + 0xc);
    *(int *)(lVar3 + 0x310) =
         (int)((ulonglong)(lVar6 + (lVar6 >> 0x3f) + 0x8000) >> 0x10) + 0x8000 >> 0x10;
    uVar5 = FUN_14012b378((iVar8 - iVar4) + -0x80000,iVar8);
    *(undefined4 *)(lVar3 + 0x314) = uVar5;
  }
  lVar7 = local_68 + 0x98;
  FUN_14012c8db(lVar7,*(undefined4 *)(lVar3 + 0x30c),*(undefined4 *)(lVar3 + 0x310));
  local_54 = *(undefined4 *)(lVar3 + 0x314);
  FUN_14012a529(lVar7);
LAB_14013a56e:
  if (DAT_140f17b40 != (local_48 ^ (ulonglong)auStack_88)) {
                    /* WARNING: Subroutine does not return */
    FUN_140188a00(local_48 ^ (ulonglong)auStack_88);
  }
  return;
}

