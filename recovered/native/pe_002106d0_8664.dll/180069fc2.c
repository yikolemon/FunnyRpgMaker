/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180069fc2 */

undefined8 * FUN_180069fc2(undefined8 *param_1,longlong param_2,ulonglong param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 *puVar4;
  longlong lVar5;
  
  if (param_2 != 0) {
    lVar1 = *(longlong *)(param_2 + 0x38);
    lVar5 = *(longlong *)(param_2 + 0x40) - lVar1 >> 3;
    if (((*(longlong *)(param_2 + 0x28) - *(longlong *)(param_2 + 0x20) >> 3) * 0x6db6db6db6db6db7 +
         lVar5 * -0x21cfb2b78c13521d == 0) && (param_3 < (ulonglong)(lVar5 * 0x21cfb2b78c13521d))) {
      lVar5 = param_3 * 0x1a8;
      if (*(ulonglong *)(lVar1 + 0x18 + lVar5) < 0x10) {
        lVar3 = lVar1 + lVar5;
      }
      else {
        lVar3 = *(longlong *)(lVar1 + lVar5);
      }
      uVar2 = FUN_180061ed8(lVar3);
      *param_1 = uVar2;
      if (*(ulonglong *)(lVar1 + 0x38 + lVar5) < 0x10) {
        puVar4 = (undefined1 *)(lVar1 + lVar5 + 0x20);
      }
      else {
        puVar4 = *(undefined1 **)(lVar1 + 0x20 + lVar5);
      }
      goto LAB_18006a03c;
    }
  }
  uVar2 = FUN_180061ed8(&DAT_1803861e4);
  *param_1 = uVar2;
  puVar4 = &DAT_1803861e4;
LAB_18006a03c:
  uVar2 = FUN_180061ed8(puVar4);
  param_1[1] = uVar2;
  return param_1;
}

