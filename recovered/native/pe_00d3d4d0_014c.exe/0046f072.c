/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0046f072 */

undefined4 __fastcall FUN_0046f072(int param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = 0xfffffff4;
  while ((*(int *)((int)&DAT_004f6550 + uVar1) != param_1 ||
         ((*(int *)((int)&DAT_004f6554 + uVar1) != param_2 &&
          (*(int *)((int)&DAT_004f6554 + uVar1) != -1))))) {
    uVar1 = uVar1 + 0xc;
    if (0x77 < uVar1) {
      return 0;
    }
  }
  return *(undefined4 *)((int)&DAT_004f6558 + uVar1);
}

