/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801303ab */

void FUN_1801303ab(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = DAT_180419160;
  FUN_180108042(param_2);
  *(ulonglong *)(lVar1 + 0x1694) =
       CONCAT44((float)((ulonglong)*(undefined8 *)(lVar1 + 0xafc) >> 0x20) -
                (float)((ulonglong)*(undefined8 *)(param_1 + 0x48) >> 0x20),
                (float)*(undefined8 *)(lVar1 + 0xafc) - (float)*(undefined8 *)(param_1 + 0x48));
  *(undefined8 *)(lVar1 + 0x1628) = param_2;
  *(byte *)(param_1 + 0xd5) = *(byte *)(param_1 + 0xd5) & 0xfe;
  return;
}

