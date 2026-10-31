/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18019e646 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_18019e646(undefined8 param_1,longlong param_2,longlong param_3,longlong *param_4)

{
  float fVar1;
  undefined8 *puVar2;
  float fVar3;
  
  puVar2 = *(undefined8 **)(param_2 + 0x90);
  puVar2[2] = param_3;
  *param_4 = 0;
  FUN_1801cbe99(*puVar2,param_4);
  FUN_1801cccac(*param_4);
  fVar3 = *(float *)(param_2 + 0x70);
  fVar1 = *(float *)(param_3 + 0x18);
  FUN_1801cc767(*puVar2);
  if (*(char *)(param_2 + 0x35) == '\0') {
    fVar3 = DAT_1802ac570 / (fVar3 * fVar1 * *(float *)(param_2 + 0x74));
    *(ulonglong *)(param_3 + 0x44) =
         CONCAT44(fVar3 * (float)((int)((ulonglong)*(undefined8 *)(*param_4 + 0x24) >> 0x20) +
                                  _UNK_180328044 >> 6),
                  fVar3 * (float)((int)*(undefined8 *)(*param_4 + 0x24) + _DAT_180328040 >> 6));
  }
  return 1;
}

