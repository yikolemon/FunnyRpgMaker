/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00473969 */

int __fastcall FUN_00473969(int param_1,uint *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  
  uVar4 = *param_2;
  uVar4 = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
  iVar1 = FUN_004738fa(param_1,uVar4 + 1,param_3);
  iVar2 = 0;
  if (iVar1 == 0) {
    iVar2 = *(int *)(param_1 + 0x20);
    if (uVar4 != 0) {
      puVar5 = param_2 + 1;
      uVar3 = 0;
      do {
        *(uint *)(iVar2 + uVar3 * 4) =
             (uint)*(byte *)((int)puVar5 + 2) |
             (uint)*(byte *)((int)puVar5 + 1) << 8 | (uint)(byte)*puVar5 << 0x10;
        puVar5 = (uint *)((int)puVar5 + 5);
        uVar3 = uVar3 + 1;
      } while (uVar4 != uVar3);
    }
    *(undefined4 *)(iVar2 + uVar4 * 4) = 0;
  }
  return iVar2;
}

