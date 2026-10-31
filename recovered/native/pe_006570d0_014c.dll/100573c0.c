/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100573c0 */

void __thiscall FUN_100573c0(undefined4 *param_1,byte param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    (*(code *)**(undefined4 **)*param_1)(0x30);
    return;
  }
  iVar3 = 1;
  if (9 < param_2) {
    iVar3 = 3 - (uint)(param_2 < 100);
  }
  iVar2 = iVar3 + 8;
  if (param_2 < 100) {
    if (9 < param_2) {
      *(undefined2 *)((int)param_1 + iVar3 + 6) = (&DAT_1028b698)[param_2];
      goto LAB_10057440;
    }
  }
  else {
    bVar1 = (byte)((uint)param_2 * 0x29 >> 0xc);
    *(undefined2 *)((int)param_1 + iVar3 + 6) = (&DAT_1028b698)[(byte)(param_2 + bVar1 * -100)];
    iVar2 = iVar3 + 6;
    param_2 = bVar1;
  }
  *(byte *)((int)param_1 + iVar2 + -1) = param_2 | 0x30;
LAB_10057440:
  (**(code **)(*(int *)*param_1 + 4))(param_1 + 2,iVar3);
  return;
}

