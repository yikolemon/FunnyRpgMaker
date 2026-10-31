/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100d6ffd */

void FUN_100d6ffd(int param_1,int param_2)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  undefined1 local_2c;
  undefined1 local_28;
  undefined1 local_24;
  undefined8 local_20;
  uint local_18;
  
  local_18 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  uVar2 = param_2 - param_1 >> 4;
  if (0 < (int)uVar2) {
    do {
      uVar3 = uVar2 - 1;
      local_20 = *(undefined8 *)(param_1 + uVar3 * 8);
      FUN_100d7126(param_1,uVar3,param_2 - param_1 >> 3,&local_20,local_2c,local_28,local_24);
      bVar1 = 1 < uVar2;
      uVar2 = uVar3;
    } while (bVar1);
  }
  if (DAT_10388d00 == (local_18 ^ (uint)&stack0xfffffffc)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

