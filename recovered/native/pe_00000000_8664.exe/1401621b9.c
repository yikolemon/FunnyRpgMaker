/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401621b9 */

undefined8
FUN_1401621b9(longlong param_1,uint param_2,undefined8 param_3,longlong param_4,undefined8 *param_5)

{
  longlong lVar1;
  uint uVar2;
  byte *pbVar3;
  int iVar4;
  byte *pbVar5;
  ulonglong uVar6;
  byte bVar7;
  
  lVar1 = *(longlong *)(param_4 + 0x28);
  uVar2 = *(int *)(lVar1 + 0x28) * 2;
  iVar4 = *(int *)(param_4 + 8);
  if (uVar2 < param_2) {
    param_2 = uVar2;
  }
  if (param_2 != 0) {
    uVar6 = 0;
    pbVar5 = (byte *)((ulonglong)(uint)(iVar4 * *(int *)(lVar1 + 0x28)) +
                     *(longlong *)(lVar1 + 0x20));
    do {
      bVar7 = (char)((*(byte *)(param_1 + uVar6) & 0x40) * 9 >> 6) + *(byte *)(param_1 + uVar6);
      if ((uVar6 & 1) == 0) {
        bVar7 = bVar7 * '\x10';
        pbVar3 = pbVar5;
      }
      else {
        pbVar3 = pbVar5 + 1;
        bVar7 = bVar7 & 0xf | *pbVar5;
      }
      *pbVar5 = bVar7;
      uVar6 = uVar6 + 1;
      pbVar5 = pbVar3;
    } while (param_2 != uVar6);
    iVar4 = *(int *)(param_4 + 8);
  }
  *(uint *)(param_4 + 8) = iVar4 + 1U;
  if ((uint)*(ushort *)(lVar1 + 0x12) <= iVar4 + 1U) {
    *param_5 = FUN_140161670;
  }
  return 0;
}

