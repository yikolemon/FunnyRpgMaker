/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0046d074 */

undefined4 __cdecl FUN_0046d074(int param_1,uint param_2)

{
  undefined1 *puVar1;
  ushort uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  
  iVar6 = *(int *)(param_1 + 0x36c);
  uVar4 = 6;
  if ((iVar6 != 0) && (param_2 < *(ushort *)(param_1 + 0x28c))) {
    uVar2 = *(ushort *)(*(int *)(iVar6 + 8) + param_2 * 2);
    uVar5 = (uint)(ushort)(uVar2 << 8 | uVar2 >> 8);
    uVar8 = (uint)*(ushort *)(param_1 + 0x298);
    uVar4 = 8;
    if (uVar5 + uVar8 <= (uint)*(ushort *)(iVar6 + 2)) {
      if (uVar8 == 0) {
        uVar4 = 0;
      }
      else {
        iVar3 = *(int *)(param_1 + 0x2a4);
        iVar6 = uVar5 * 4 + *(int *)(iVar6 + 4);
        uVar4 = 0;
        iVar7 = 0;
        do {
          puVar1 = (undefined1 *)(iVar3 + iVar7);
          *puVar1 = *(undefined1 *)(iVar6 + iVar7);
          puVar1[1] = *(undefined1 *)(iVar6 + 1 + iVar7);
          puVar1[2] = *(undefined1 *)(iVar6 + 2 + iVar7);
          puVar1[3] = *(undefined1 *)(iVar6 + 3 + iVar7);
          iVar7 = iVar7 + 4;
        } while (puVar1 + 4 < (undefined1 *)(iVar3 + uVar8 * 4));
      }
    }
  }
  return uVar4;
}

