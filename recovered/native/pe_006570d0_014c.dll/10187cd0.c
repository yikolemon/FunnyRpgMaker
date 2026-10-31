/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10187cd0 */

void __fastcall FUN_10187cd0(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (0 < param_1[2]) {
    iVar3 = 0;
    iVar4 = 0;
    do {
      iVar5 = param_1[4];
      if (iVar4 == *param_1) {
        *(undefined8 *)(iVar5 + 0x10 + iVar3) = 0;
        puVar1 = (undefined4 *)(iVar5 + iVar3);
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1[2] = 0;
        puVar1[3] = 0;
        iVar5 = param_1[4];
      }
      iVar2 = *(int *)(iVar5 + 8 + iVar3);
      if (iVar2 != 0) {
        *(undefined4 *)(iVar5 + 4 + iVar3) = 0;
        *(undefined4 *)(iVar5 + iVar3) = 0;
        FUN_100fa2cb(iVar2);
        *(undefined4 *)(iVar5 + 8 + iVar3) = 0;
        iVar5 = param_1[4];
      }
      iVar2 = *(int *)(iVar5 + 0x14 + iVar3);
      if (iVar2 != 0) {
        *(undefined4 *)(iVar5 + 0x10 + iVar3) = 0;
        *(undefined4 *)(iVar5 + 0xc + iVar3) = 0;
        FUN_100fa2cb(iVar2);
        *(undefined4 *)(iVar5 + 0x14 + iVar3) = 0;
      }
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 0x18;
    } while (iVar4 < param_1[2]);
  }
  *param_1 = 0;
  param_1[1] = 1;
  if (param_1[4] != 0) {
    param_1[3] = 0;
    param_1[2] = 0;
    FUN_100fa2cb(param_1[4]);
    param_1[4] = 0;
  }
  return;
}

