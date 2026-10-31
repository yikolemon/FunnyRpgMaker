/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18012f287 */

void FUN_18012f287(longlong param_1,longlong param_2)

{
  ushort uVar1;
  ushort uVar2;
  undefined1 auVar3 [14];
  undefined1 auVar4 [14];
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar5 = FUN_18010f8ee();
  uVar6 = *(undefined8 *)(lVar5 + 8);
  *(undefined8 *)(param_1 + 0x54) = uVar6;
  if (*(int *)(param_2 + 0x10) != 0) {
    *(int *)(param_1 + 0x50) = *(int *)(param_2 + 0x10);
    auVar7 = pshuflw(ZEXT416(*(uint *)(param_2 + 0xc)),ZEXT416(*(uint *)(param_2 + 0xc)),0x60);
    uVar6 = CONCAT44((float)(auVar7._4_4_ >> 0x10),(float)(auVar7._0_4_ >> 0x10));
    *(undefined8 *)(param_1 + 0x54) = uVar6;
  }
  auVar7 = pshuflw(ZEXT416(*(uint *)(param_2 + 4)),ZEXT416(*(uint *)(param_2 + 4)),0x60);
  *(ulonglong *)(param_1 + 0x60) =
       CONCAT44((float)(int)((float)(auVar7._4_4_ >> 0x10) + (float)((ulonglong)uVar6 >> 0x20)),
                (float)(int)((float)(auVar7._0_4_ >> 0x10) + (float)uVar6));
  uVar1 = *(ushort *)(param_2 + 8);
  if ((0 < (short)uVar1) && (uVar2 = *(ushort *)(param_2 + 10), 0 < (short)uVar2)) {
    auVar3._12_2_ = uVar2;
    auVar3._0_12_ = ZEXT212(uVar2) << 0x30;
    uVar6 = CONCAT44(auVar3._10_4_,CONCAT22(uVar1,uVar2));
    auVar4._6_8_ = 0;
    auVar4._0_6_ = (uint6)((ulonglong)uVar6 >> 0x10);
    *(float *)(param_1 + 0x68) = (float)uVar1;
    *(float *)(param_1 + 0x6c) = (float)(int)CONCAT82(SUB148(auVar4 << 0x40,6),uVar2);
    *(float *)(param_1 + 0x70) = (float)(int)((ulonglong)uVar6 >> 0x10);
    *(float *)(param_1 + 0x74) = (float)(auVar3._10_4_ >> 0x10);
  }
  *(undefined1 *)(param_1 + 0x10c) = *(undefined1 *)(param_2 + 0x1e);
  *(undefined4 *)(param_1 + 0x4d0) = *(undefined4 *)(param_2 + 0x14);
  *(undefined2 *)(param_1 + 0x496) = *(undefined2 *)(param_2 + 0x1c);
  return;
}

