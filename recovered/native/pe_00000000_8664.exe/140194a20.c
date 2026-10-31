/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140194a20 */

ulonglong FUN_140194a20(longlong param_1)

{
  undefined8 *puVar1;
  ulonglong *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  int iVar6;
  
  puVar1 = *(undefined8 **)(param_1 + 0x18);
  *(undefined8 **)(param_1 + 0x18) = puVar1 + 1;
  puVar2 = (ulonglong *)*puVar1;
  uVar4 = FUN_1401b42b0();
  if ((int)uVar4 == 0) goto LAB_140194a45;
  iVar6 = *(int *)(param_1 + 0x34);
  if (iVar6 < 6) {
    if (iVar6 != 5) {
      if (iVar6 != 0) {
        if (iVar6 == 1) {
          uVar5 = CONCAT71((int7)((ulonglong)uVar4 >> 8),*(undefined1 *)(param_1 + 0x20));
          *(undefined1 *)puVar2 = *(undefined1 *)(param_1 + 0x20);
          goto LAB_140194abe;
        }
        iVar6 = iVar6 + -2;
        if (iVar6 == 0) {
          uVar5 = (ulonglong)*(ushort *)(param_1 + 0x20);
          *(ushort *)puVar2 = *(ushort *)(param_1 + 0x20);
          goto LAB_140194abe;
        }
        goto LAB_140194aad;
      }
LAB_140194acf:
      uVar5 = (ulonglong)*(uint *)(param_1 + 0x20);
      *(uint *)puVar2 = *(uint *)(param_1 + 0x20);
      goto LAB_140194abe;
    }
  }
  else if (((iVar6 != 6) && (iVar6 != 7)) && (iVar6 = iVar6 + -9, iVar6 != 0)) {
LAB_140194aad:
    if (iVar6 == 1) goto LAB_140194acf;
    if (iVar6 != 2) {
LAB_140194a45:
      lVar3 = *(longlong *)(param_1 + 8);
      *(undefined1 *)(lVar3 + 0x30) = 1;
      *(undefined4 *)(lVar3 + 0x2c) = 0x16;
      uVar5 = FUN_1401ae820(0,0,0,0,0,*(undefined8 *)(param_1 + 8));
      return uVar5 & 0xffffffffffffff00;
    }
  }
  uVar5 = (ulonglong)*(int *)(param_1 + 0x20);
  *puVar2 = uVar5;
LAB_140194abe:
  *(undefined1 *)(param_1 + 0x38) = 1;
  return CONCAT71((int7)(uVar5 >> 8),1);
}

