/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1012a324 */

void __fastcall FUN_1012a324(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = DAT_1039d74c;
  FUN_10103445(param_2);
  *(ulonglong *)(iVar1 + 0x1540) =
       CONCAT44((float)((ulonglong)*(undefined8 *)(iVar1 + 0xac8) >> 0x20) -
                (float)((ulonglong)*(undefined8 *)(param_1 + 0x34) >> 0x20),
                (float)*(undefined8 *)(iVar1 + 0xac8) - (float)*(undefined8 *)(param_1 + 0x34));
  *(undefined4 *)(iVar1 + 0x14dc) = param_2;
  *(byte *)(param_1 + 0xad) = *(byte *)(param_1 + 0xad) & 0xfe;
  return;
}

