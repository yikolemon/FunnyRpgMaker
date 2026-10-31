/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140765779 */

void FUN_140765779(longlong param_1,uint param_2)

{
  uint uVar1;
  undefined8 unaff_RBX;
  uint uVar2;
  
  uVar1 = *(uint *)(param_1 + 0x120);
  uVar2 = (uint)(char)(uVar1 >> 8);
  if ((char)((ulonglong)unaff_RBX >> 0x20) == '\0') {
    param_2 = ~param_2;
    *(uint *)(param_1 + 0x120) =
         param_2 << 0x18 & uVar1 | (param_2 & 0xff & uVar1 >> 0x10) << 0x10 |
         uVar1 & 0xff | (uVar2 & param_2 & 0xff) << 8;
    uVar1 = *(uint *)(param_1 + 0x124);
    param_2 = (int)(char)uVar1 & param_2;
  }
  else {
    *(uint *)(param_1 + 0x120) =
         ((uVar1 >> 0x10 | param_2) & 0xff) << 0x10 | uVar1 & 0xff000000 | param_2 << 0x18 |
         uVar1 & 0xff | ((uVar2 | param_2) & 0xff) << 8;
    uVar1 = *(uint *)(param_1 + 0x124);
    param_2 = (int)(char)uVar1 | param_2;
  }
  *(uint *)(param_1 + 0x124) = uVar1 & 0xffffff00 | param_2 & 0xff;
  return;
}

