/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801c06f9 */

undefined8 * FUN_1801c06f9(undefined8 param_1,undefined4 param_2,longlong param_3)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  
  puVar2 = (undefined8 *)FUN_1800fe7f8(0x50);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  puVar2[5] = 0;
  *(undefined8 *)((longlong)puVar2 + 0x2d) = 0;
  *(undefined8 *)((longlong)puVar2 + 0x35) = 0;
  *(undefined1 *)((longlong)puVar2 + 0x3d) = 1;
  *(undefined4 *)(puVar2 + 8) = 0x80;
  *(undefined8 *)((longlong)puVar2 + 0x44) = DAT_1803292e0;
  FUN_1801c07f5(puVar2,0x1c,"%s",param_1);
  *(undefined4 *)((longlong)puVar2 + 0x1c) = param_2;
  puVar2[4] = param_3;
  if (param_3 == 0) {
    *(undefined4 *)(puVar2 + 7) = 0;
  }
  else {
    iVar1 = *(int *)(param_3 + 0x28);
    *(int *)(puVar2 + 7) = iVar1;
    if (iVar1 == *(int *)(param_3 + 0x2c)) {
      if (iVar1 == 0) {
        iVar4 = 8;
      }
      else {
        iVar4 = iVar1 / 2 + iVar1;
      }
      iVar5 = iVar1 + 1;
      if (iVar1 + 1 < iVar4) {
        iVar5 = iVar4;
      }
      lVar3 = FUN_1800fe7f8((longlong)iVar5 << 3);
      if (*(longlong *)(param_3 + 0x30) != 0) {
        FUN_1802a82f0(lVar3,*(longlong *)(param_3 + 0x30),(longlong)*(int *)(param_3 + 0x28) << 3);
        FUN_1800fe8d4(*(undefined8 *)(param_3 + 0x30));
      }
      *(longlong *)(param_3 + 0x30) = lVar3;
      *(int *)(param_3 + 0x2c) = iVar5;
      iVar1 = *(int *)(param_3 + 0x28);
    }
    else {
      lVar3 = *(longlong *)(param_3 + 0x30);
    }
    *(undefined8 **)(lVar3 + (longlong)iVar1 * 8) = puVar2;
    *(int *)(param_3 + 0x28) = *(int *)(param_3 + 0x28) + 1;
  }
  return puVar2;
}

