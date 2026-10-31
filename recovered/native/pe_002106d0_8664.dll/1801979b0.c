/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801979b0 */

bool FUN_1801979b0(longlong param_1,undefined8 param_2,undefined2 *param_3)

{
  uint *puVar1;
  
  puVar1 = (uint *)FUN_180197a60();
  if (param_3 != (undefined2 *)0x0 && puVar1 != (uint *)0x0) {
    *param_3 = (short)*puVar1;
    param_3[1] = *(undefined2 *)((longlong)puVar1 + 2);
    param_3[2] = (short)puVar1[1];
    param_3[3] = *(undefined2 *)((longlong)puVar1 + 6);
    *(ulonglong *)(param_3 + 4) =
         CONCAT44((float)((ulonglong)*(undefined8 *)(param_1 + 0x54) >> 0x20) *
                  (float)(*puVar1 >> 0x10),
                  (float)*(undefined8 *)(param_1 + 0x54) * (float)(*puVar1 & 0xffff));
    *(ulonglong *)(param_3 + 8) =
         CONCAT44((float)((ulonglong)*(undefined8 *)(param_1 + 0x54) >> 0x20) *
                  (float)((puVar1[1] >> 0x10) + (*puVar1 >> 0x10)),
                  (float)*(undefined8 *)(param_1 + 0x54) *
                  (float)((puVar1[1] & 0xffff) + (*puVar1 & 0xffff)));
  }
  return puVar1 != (uint *)0x0;
}

