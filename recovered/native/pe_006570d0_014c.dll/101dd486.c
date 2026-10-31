/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101dd486 */

undefined4 __fastcall FUN_101dd486(int *param_1,ushort *param_2)

{
  ushort *puVar1;
  ushort uVar2;
  undefined4 uVar3;
  
  puVar1 = (ushort *)param_1[1];
  if (puVar1 < (ushort *)param_1[2]) {
    if (*param_1 == 1) {
      param_1[1] = (int)(puVar1 + 1);
      uVar2 = *puVar1 << 8 | *puVar1 >> 8;
    }
    else {
      uVar2 = *(ushort *)(param_1 + 3);
      if (*(ushort *)((int)param_1 + 0xe) < uVar2) {
        param_1[1] = (int)(puVar1 + 1);
        uVar2 = *puVar1 << 8 | *puVar1 >> 8;
        *(ushort *)(param_1 + 3) = uVar2;
        param_1[1] = (int)(puVar1 + 2);
        *(ushort *)((int)param_1 + 0xe) = puVar1[1] << 8 | puVar1[1] >> 8;
        param_1[1] = (int)(puVar1 + 3);
      }
      *(ushort *)(param_1 + 3) = uVar2 + 1;
    }
    *param_2 = uVar2;
    uVar3 = CONCAT31((uint3)(byte)(uVar2 >> 8),1);
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

