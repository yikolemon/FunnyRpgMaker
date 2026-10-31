/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407810a0 */

void FUN_1407810a0(ulonglong param_1,ulonglong param_2)

{
  ushort uVar1;
  ushort uVar2;
  undefined4 uVar3;
  undefined1 auVar4 [14];
  undefined1 auVar5 [14];
  longlong lVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  
  param_2 = param_2 & 0xffffffff;
  param_1 = param_1 & 0xffffffff;
  lVar6 = FUN_140762c06();
  uVar3 = *(undefined4 *)(lVar6 + 8);
  uVar7 = *(undefined8 *)(lVar6 + 8);
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(lVar6 + 0xc);
  *(undefined4 *)(param_1 + 0x44) = uVar3;
  if (*(int *)(param_2 + 0x10) != 0) {
    *(int *)(param_1 + 0x40) = *(int *)(param_2 + 0x10);
    auVar8 = pshuflw(ZEXT416(*(uint *)(param_2 + 0xc)),ZEXT416(*(uint *)(param_2 + 0xc)),0x60);
    uVar7 = CONCAT44((float)(auVar8._4_4_ >> 0x10),(float)(auVar8._0_4_ >> 0x10));
    *(undefined8 *)(param_1 + 0x44) = uVar7;
  }
  auVar8 = pshuflw(ZEXT416(*(uint *)(param_2 + 4)),ZEXT416(*(uint *)(param_2 + 4)),0x60);
  *(ulonglong *)(param_1 + 0x50) =
       CONCAT44((float)(int)((float)(auVar8._4_4_ >> 0x10) + (float)((ulonglong)uVar7 >> 0x20)),
                (float)(int)((float)(auVar8._0_4_ >> 0x10) + (float)uVar7));
  uVar1 = *(ushort *)(param_2 + 8);
  if ((0 < (short)uVar1) && (uVar2 = *(ushort *)(param_2 + 10), 0 < (short)uVar2)) {
    auVar4._12_2_ = uVar2;
    auVar4._0_12_ = ZEXT212(uVar2) << 0x30;
    uVar7 = CONCAT44(auVar4._10_4_,CONCAT22(uVar1,uVar2));
    auVar5._6_8_ = 0;
    auVar5._0_6_ = (uint6)((ulonglong)uVar7 >> 0x10);
    *(float *)(param_1 + 0x58) = (float)uVar1;
    *(float *)(param_1 + 0x5c) = (float)(int)CONCAT82(SUB148(auVar5 << 0x40,6),uVar2);
    *(float *)(param_1 + 0x60) = (float)(int)((ulonglong)uVar7 >> 0x10);
    *(float *)(param_1 + 100) = (float)(auVar4._10_4_ >> 0x10);
  }
  *(undefined1 *)(param_1 + 0xfc) = *(undefined1 *)(param_2 + 0x1e);
  *(undefined4 *)(param_1 + 0x438) = *(undefined4 *)(param_2 + 0x14);
  *(undefined2 *)(param_1 + 0x40a) = *(undefined2 *)(param_2 + 0x1c);
  return;
}

