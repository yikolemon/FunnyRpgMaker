/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401716d4 */

undefined8 FUN_1401716d4(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  uint uVar7;
  undefined8 uVar8;
  int iVar9;
  byte *pbVar10;
  uint *puVar11;
  
  iVar9 = *(int *)(param_1 + 0x28);
  lVar5 = *(longlong *)(param_1 + 0x18);
  iVar6 = FUN_14017c38b(param_1,iVar9 + 1,param_2);
  if (iVar6 == 0) {
    puVar11 = *(uint **)(param_1 + 0x30);
    if (iVar9 != 0) {
      pbVar10 = (byte *)(lVar5 + 10);
      do {
        bVar1 = *pbVar10;
        bVar2 = pbVar10[1];
        bVar3 = pbVar10[2];
        uVar7 = *(uint *)(pbVar10 + 3);
        uVar4 = *(uint *)(pbVar10 + 7);
        uVar7 = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 << 0x18;
        if (uVar7 == 0) {
LAB_140171743:
          uVar7 = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
          if (uVar7 != 0) {
            iVar6 = FUN_14017c32b((ulonglong)uVar7 + *(longlong *)(param_1 + 0x18),param_3);
            if (iVar6 != 0) goto LAB_14017175c;
          }
        }
        else {
          iVar6 = FUN_14017c2c3((ulonglong)uVar7 + *(longlong *)(param_1 + 0x18),param_3);
          if (iVar6 == 0) goto LAB_140171743;
LAB_14017175c:
          *puVar11 = (uint)bVar2 << 8 | (uint)bVar1 << 0x10 | (uint)bVar3;
          puVar11 = puVar11 + 1;
        }
        pbVar10 = pbVar10 + 0xb;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
    }
    *puVar11 = 0;
    uVar8 = *(undefined8 *)(param_1 + 0x30);
  }
  else {
    uVar8 = 0;
  }
  return uVar8;
}

