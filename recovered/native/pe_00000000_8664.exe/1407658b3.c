/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407658b3 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1407658b3(void)

{
  undefined8 uVar1;
  ulonglong uVar2;
  bool in_ZF;
  uint unaff_retaddr;
  
  uVar2 = (ulonglong)unaff_retaddr;
  if ((((in_ZF) && (*(char *)(uVar2 + 0x34) != '\x01')) ||
      ((*(uint *)(uVar2 + 0xc) & 0x1080001) != 0)) ||
     (uVar1 = CONCAT71((uint7)(uint3)((uint)_DAT_6f78801039d74c >> 8),1),
     *(char *)(uVar2 + 0x102) == '\x01')) {
    uVar1 = 0;
  }
  return uVar1;
}

