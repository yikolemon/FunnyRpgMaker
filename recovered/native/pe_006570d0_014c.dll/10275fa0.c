/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10275fa0 */

/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */

void FUN_10275fa0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 int param_5)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int local_1c;
  int local_18;
  char local_10;
  
  FUN_1025be8b(param_1);
  uVar1 = *(undefined4 *)(local_18 + 8);
  iVar2 = ___acrt_GetLocaleInfoEx_16(param_2,param_3,0,0);
  if (iVar2 == 0) goto LAB_1027605c;
  uVar3 = iVar2 * 2 + 8;
  uVar3 = -(uint)((uint)(iVar2 * 2) < uVar3) & uVar3;
  if (uVar3 == 0) {
    puVar6 = (undefined4 *)0x0;
  }
  else if (uVar3 < 0x401) {
    puVar4 = (undefined4 *)&stack0xffffffd8;
    puVar6 = (undefined4 *)&stack0xffffffd8;
    if (&stack0x00000000 != (undefined1 *)0x28) {
LAB_10276019:
      puVar6 = puVar4 + 2;
      if ((puVar6 != (undefined4 *)0x0) &&
         (iVar2 = ___acrt_GetLocaleInfoEx_16(param_2,param_3,puVar6,iVar2), iVar2 != 0)) {
        uVar5 = 0;
        if (param_5 != 0) {
          uVar5 = param_4;
        }
        FUN_10274283(uVar1,0,puVar6,0xffffffff,uVar5,param_5,0,0);
      }
    }
  }
  else {
    puVar4 = (undefined4 *)FUN_10274170(uVar3);
    puVar6 = (undefined4 *)0x0;
    if (puVar4 != (undefined4 *)0x0) {
      *puVar4 = 0xdddd;
      goto LAB_10276019;
    }
  }
  FUN_10234d10(puVar6);
LAB_1027605c:
  if (local_10 != '\0') {
    *(uint *)(local_1c + 0x350) = *(uint *)(local_1c + 0x350) & 0xfffffffd;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

