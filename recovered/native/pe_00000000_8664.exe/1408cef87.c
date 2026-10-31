/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1408cef87 */

undefined8 FUN_1408cef87(void)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = (ulonglong)*(uint *)(((ulonglong)&stack0xfffffffffffffff8 & 0xffffffff) + 8) - 1;
  if (lVar2 == 0) {
    return 0x103a5460;
  }
  iVar1 = (int)lVar2;
  if (iVar1 != 4) {
    if (iVar1 == 0xd) {
      return 0x103a546c;
    }
    if (iVar1 == 0x13) {
      return 0x103a5464;
    }
    if (iVar1 != 0x14) {
      return 0;
    }
  }
  return 0x103a5468;
}

