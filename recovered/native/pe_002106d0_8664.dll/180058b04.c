/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180058b04 */

void FUN_180058b04(undefined8 *param_1,byte param_2)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000180058b71. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)*param_1)((undefined8 *)*param_1,0x30);
    return;
  }
  lVar3 = 1;
  if (9 < param_2) {
    lVar3 = 3 - (ulonglong)(param_2 < 100);
  }
  lVar2 = lVar3 + 0x10;
  if (param_2 < 100) {
    if (9 < param_2) {
      *(undefined2 *)((longlong)param_1 + lVar3 + 0xe) =
           *(undefined2 *)(&DAT_1802ac810 + (ulonglong)param_2 * 2);
      goto LAB_180058b91;
    }
  }
  else {
    bVar1 = (byte)((uint)param_2 * 0x29 >> 0xc);
    *(undefined2 *)((longlong)param_1 + lVar3 + 0xe) =
         *(undefined2 *)(&DAT_1802ac810 + (ulonglong)(byte)(param_2 + bVar1 * -100) * 2);
    lVar2 = lVar3 + 0xe;
    param_2 = bVar1;
  }
  *(byte *)((longlong)param_1 + lVar2 + -1) = param_2 | 0x30;
LAB_180058b91:
                    /* WARNING: Could not recover jumptable at 0x000180058b9b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)*param_1 + 8))((longlong *)*param_1,param_1 + 2);
  return;
}

