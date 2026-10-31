/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400a92db */

void FUN_1400a92db(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = DAT_140f2a910;
  FUN_14008135a(param_2);
  *(ulonglong *)(lVar1 + 0x1694) =
       CONCAT44((float)((ulonglong)*(undefined8 *)(lVar1 + 0xafc) >> 0x20) -
                (float)((ulonglong)*(undefined8 *)(param_1 + 0x48) >> 0x20),
                (float)*(undefined8 *)(lVar1 + 0xafc) - (float)*(undefined8 *)(param_1 + 0x48));
  *(undefined8 *)(lVar1 + 0x1628) = param_2;
  *(byte *)(param_1 + 0xd5) = *(byte *)(param_1 + 0xd5) & 0xfe;
  return;
}

