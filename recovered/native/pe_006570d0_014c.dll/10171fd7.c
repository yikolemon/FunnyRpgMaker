/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10171fd7 */

undefined4 __fastcall FUN_10171fd7(int *param_1,int param_2,int param_3)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  uint uVar6;
  int iVar7;
  
  iVar1 = param_1[3];
  iVar7 = ((int *)*param_1)[1] * *(int *)*param_1;
  puVar2 = (undefined1 *)FUN_101731c8(0);
  if (puVar2 == (undefined1 *)0x0) {
    FUN_10170e07();
    uVar4 = 0;
  }
  else {
    if (param_3 == 3) {
      if (iVar7 != 0) {
        iVar3 = 0;
        puVar5 = puVar2;
        do {
          uVar6 = (uint)*(byte *)(iVar1 + iVar3);
          *puVar5 = *(undefined1 *)(param_2 + uVar6 * 4);
          puVar5[1] = *(undefined1 *)(param_2 + 1 + uVar6 * 4);
          puVar5[2] = *(undefined1 *)(param_2 + 2 + uVar6 * 4);
          puVar5 = puVar5 + 3;
          iVar3 = iVar3 + 1;
        } while (iVar7 - iVar3 != 0);
      }
    }
    else if (iVar7 != 0) {
      iVar3 = 0;
      do {
        *(undefined4 *)(puVar2 + iVar3 * 4) =
             *(undefined4 *)(param_2 + (uint)*(byte *)(iVar1 + iVar3) * 4);
        iVar3 = iVar3 + 1;
      } while (iVar7 - iVar3 != 0);
    }
    thunk_FUN_10274120(iVar1);
    param_1[3] = (int)puVar2;
    uVar4 = 1;
  }
  return uVar4;
}

