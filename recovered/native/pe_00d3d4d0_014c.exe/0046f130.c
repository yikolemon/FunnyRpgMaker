/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0046f130 */

int __fastcall FUN_0046f130(int *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  if (*(int *)(param_2 + 0x368) != 0) {
    iVar1 = *(int *)(param_2 + 0x68);
    iVar2 = *(int *)(*(int *)(param_2 + 0x32c) + param_3 * 4);
    iVar3 = FUN_00420696(iVar1,*(uint *)(param_2 + 0x364));
    if (iVar3 == 0) {
      *param_1 = param_2;
      param_1[1] = iVar1;
      param_1[2] = *(int *)(param_2 + 0x54) + 0x4c;
      param_1[3] = param_4;
      *(undefined2 *)(param_1 + 4) = 0;
      param_1[5] = *(int *)(param_2 + 0x364);
      param_1[6] = *(int *)(param_2 + 0x368);
      iVar1 = *(int *)(param_2 + 0x31c);
      param_1[9] = iVar1;
      param_1[10] = *(int *)(param_2 + 800) + iVar1;
      iVar3 = 3;
      if (iVar2 * 0x30 + 0x37U <= *(uint *)(param_2 + 800)) {
        iVar2 = iVar2 * 0x30;
        uVar4 = *(uint *)(iVar1 + 8 + iVar2);
        uVar5 = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
        param_1[7] = uVar5;
        uVar4 = *(uint *)(iVar1 + 0x10 + iVar2);
        uVar4 = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
        param_1[8] = uVar4;
        *(undefined1 *)((int)param_1 + 0x12) = *(undefined1 *)(iVar1 + 0x36 + iVar2);
        if ((*(uint *)(param_2 + 800) < uVar5) ||
           (iVar3 = 0, *(uint *)(param_2 + 800) - uVar5 >> 3 < uVar4)) {
          iVar3 = 3;
        }
      }
    }
    return iVar3;
  }
  return 0x8e;
}

