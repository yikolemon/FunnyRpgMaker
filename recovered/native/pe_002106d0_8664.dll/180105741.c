/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180105741 */

void FUN_180105741(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  
  uVar1 = FUN_1800fed39(param_3,0,0);
  puVar2 = (undefined8 *)FUN_18011db05(uVar1);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)FUN_18011d9dc(param_3);
  }
  else {
    *(undefined8 *)((longlong)puVar2 + 0xc) = 0;
    *(undefined8 *)((longlong)puVar2 + 0x14) = 0;
    *puVar2 = 0;
    puVar2[1] = 0;
    *(undefined2 *)((longlong)puVar2 + 0x1c) = 0xffff;
    *(undefined4 *)((longlong)puVar2 + 0x1e) = 0;
    *(undefined2 *)((longlong)puVar2 + 0x22) = 0;
  }
  *(undefined4 *)puVar2 = uVar1;
  *(undefined1 *)(puVar2 + 4) = 1;
  return;
}

