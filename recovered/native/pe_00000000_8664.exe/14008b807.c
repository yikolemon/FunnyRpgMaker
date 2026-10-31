/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14008b807 */

void FUN_14008b807(longlong param_1,uint param_2,char param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)(param_1 + 0x130);
  uVar2 = (uint)(char)(uVar1 >> 8);
  if (param_3 == '\0') {
    param_2 = ~param_2;
    *(uint *)(param_1 + 0x130) =
         param_2 << 0x18 & uVar1 | (param_2 & 0xff & uVar1 >> 0x10) << 0x10 |
         uVar1 & 0xff | (uVar2 & param_2 & 0xff) << 8;
    uVar1 = *(uint *)(param_1 + 0x134);
    param_2 = (int)(char)uVar1 & param_2;
  }
  else {
    *(uint *)(param_1 + 0x130) =
         ((uVar1 >> 0x10 | param_2) & 0xff) << 0x10 | uVar1 & 0xff000000 | param_2 << 0x18 |
         uVar1 & 0xff | ((uVar2 | param_2) & 0xff) << 8;
    uVar1 = *(uint *)(param_1 + 0x134);
    param_2 = (int)(char)uVar1 | param_2;
  }
  *(uint *)(param_1 + 0x134) = uVar1 & 0xffffff00 | param_2 & 0xff;
  return;
}

