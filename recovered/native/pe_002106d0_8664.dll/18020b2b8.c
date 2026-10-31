/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18020b2b8 */

undefined8
FUN_18020b2b8(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  
  if (*(char *)(param_1 + 0x30) == '\0') {
    uVar6 = 8;
  }
  else {
    lVar2 = *(longlong *)(param_1 + 0x28);
    uVar1 = *(ushort *)(lVar2 + 0x62);
    if (*(uint *)(lVar2 + 8) < (uint)*(ushort *)(lVar2 + 0x1a) + (uint)uVar1 + 3) {
      uVar6 = FUN_1801c9d58(lVar2,3,0);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
      uVar1 = *(ushort *)(lVar2 + 0x62);
    }
    uVar5 = (ulonglong)uVar1;
    lVar3 = *(longlong *)(lVar2 + 0x68);
    lVar4 = *(longlong *)(lVar2 + 0x70);
    *(undefined8 *)(lVar3 + uVar5 * 8) = *param_2;
    *(undefined8 *)(lVar3 + 8 + uVar5 * 8) = *param_3;
    *(undefined8 *)(lVar3 + 0x10 + uVar5 * 8) = *param_4;
    *(undefined2 *)(lVar4 + uVar5) = 0x202;
    *(undefined1 *)(lVar4 + 2 + uVar5) = 1;
    *(short *)(lVar2 + 0x62) = *(short *)(lVar2 + 0x62) + 3;
    uVar6 = 0;
  }
  return uVar6;
}

