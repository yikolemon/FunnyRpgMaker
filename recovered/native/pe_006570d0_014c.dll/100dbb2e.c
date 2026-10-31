/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100dbb2e */

undefined4 __thiscall FUN_100dbb2e(undefined4 *param_1,undefined4 param_2)

{
  char *pcVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar2 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  pcVar1 = (char *)*param_1;
  uVar4 = 0;
  uVar3 = 0;
  uVar5 = 0x80000000;
  if (*pcVar1 == '\x02') {
    uVar4 = *(undefined4 *)(*(int *)(pcVar1 + 8) + 4);
  }
  else if (*pcVar1 == '\x01') {
    uVar3 = **(undefined4 **)(pcVar1 + 8);
  }
  else {
    uVar5 = 1;
  }
  FUN_100dc11e(pcVar1,uVar3,uVar4,uVar5,0);
  if (DAT_10388d00 == (uVar2 ^ (uint)&stack0xfffffffc)) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

