/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1408d8dd0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1408d8dd0(void)

{
  uint uVar1;
  uint *puVar2;
  ulonglong uVar3;
  uint *puVar4;
  
  uVar3 = (ulonglong)&stack0xfffffffffffffff8 & 0xffffffff;
  uVar1 = *(uint *)(uVar3 + 0x10);
  *(undefined4 *)((ulonglong)*(uint *)(uVar3 + 8) + 4) = 0;
  *(undefined4 *)((ulonglong)*(uint *)(uVar3 + 8) + 8) = 0;
  *(undefined4 *)((ulonglong)*(uint *)(uVar3 + 8) + 0xc) = 0;
  if ((uVar1 & 0x10) != 0) {
    puVar2 = (uint *)((ulonglong)*(uint *)(uVar3 + 8) + 4);
    *puVar2 = *puVar2 | 1;
  }
  if ((uVar1 & 2) != 0) {
    puVar2 = (uint *)((ulonglong)*(uint *)(uVar3 + 8) + 4);
    *puVar2 = *puVar2 | 2;
  }
  if ((uVar1 & 1) != 0) {
    puVar2 = (uint *)((ulonglong)*(uint *)(uVar3 + 8) + 4);
    *puVar2 = *puVar2 | 4;
  }
  if ((uVar1 & 4) != 0) {
    puVar2 = (uint *)((ulonglong)*(uint *)(uVar3 + 8) + 4);
    *puVar2 = *puVar2 | 8;
  }
  if ((uVar1 & 8) != 0) {
    puVar2 = (uint *)((ulonglong)*(uint *)(uVar3 + 8) + 4);
    *puVar2 = *puVar2 | 0x10;
  }
  puVar4 = (uint *)(ulonglong)*(uint *)(uVar3 + 0xc);
  puVar2 = (uint *)((ulonglong)*(uint *)(uVar3 + 8) + 8);
  *puVar2 = *puVar2 ^ (~(*puVar4 << 4) ^ *(uint *)((ulonglong)*(uint *)(uVar3 + 8) + 8)) & 0x10;
  puVar2 = (uint *)((ulonglong)*(uint *)(uVar3 + 8) + 8);
  *puVar2 = *puVar2 ^ (~(*puVar4 * 2) ^ *(uint *)((ulonglong)*(uint *)(uVar3 + 8) + 8)) & 8;
  puVar2 = (uint *)((ulonglong)*(uint *)(uVar3 + 8) + 8);
  *puVar2 = *puVar2 ^ (~(*puVar4 >> 1) ^ *(uint *)((ulonglong)*(uint *)(uVar3 + 8) + 8)) & 4;
  puVar2 = (uint *)((ulonglong)*(uint *)(uVar3 + 8) + 8);
  *puVar2 = *puVar2 ^ (~(*puVar4 >> 3) ^ *(uint *)((ulonglong)*(uint *)(uVar3 + 8) + 8)) & 2;
  puVar2 = (uint *)((ulonglong)*(uint *)(uVar3 + 8) + 8);
  *puVar2 = *puVar2 ^ (~(*puVar4 >> 5) ^ *(uint *)((ulonglong)*(uint *)(uVar3 + 8) + 8)) & 1;
  uVar1 = FUN_1408d9150();
  if ((uVar1 & 1) != 0) {
    puVar2 = (uint *)((ulonglong)*(uint *)(uVar3 + 8) + 0xc);
    *puVar2 = *puVar2 | 0x10;
  }
  if ((uVar1 & 4) != 0) {
    puVar2 = (uint *)((ulonglong)*(uint *)(uVar3 + 8) + 0xc);
    *puVar2 = *puVar2 | 8;
  }
  if ((uVar1 & 8) != 0) {
    puVar2 = (uint *)((ulonglong)*(uint *)(uVar3 + 8) + 0xc);
    *puVar2 = *puVar2 | 4;
  }
  if ((uVar1 & 0x10) != 0) {
    puVar2 = (uint *)((ulonglong)*(uint *)(uVar3 + 8) + 0xc);
    *puVar2 = *puVar2 | 2;
  }
  if ((uVar1 & 0x20) != 0) {
    puVar2 = (uint *)((ulonglong)*(uint *)(uVar3 + 8) + 0xc);
    *puVar2 = *puVar2 | 1;
  }
  uVar1 = *puVar4 & 0xc00;
  if (uVar1 < 0x801) {
    if (uVar1 == 0x800) {
      *(uint *)(ulonglong)*(uint *)(uVar3 + 8) =
           *(uint *)(ulonglong)*(uint *)(uVar3 + 8) & 0xfffffffe | 2;
    }
    else if (uVar1 == 0) {
      *(uint *)(ulonglong)*(uint *)(uVar3 + 8) =
           *(uint *)(ulonglong)*(uint *)(uVar3 + 8) & 0xfffffffc;
    }
    else if (uVar1 == 0x400) {
      *(uint *)(ulonglong)*(uint *)(uVar3 + 8) =
           *(uint *)(ulonglong)*(uint *)(uVar3 + 8) & 0xfffffffd | 1;
    }
  }
  else if (uVar1 == 0xc00) {
    *(uint *)(ulonglong)*(uint *)(uVar3 + 8) = *(uint *)(ulonglong)*(uint *)(uVar3 + 8) | 3;
  }
  uVar1 = *puVar4 & 0x300;
  if (uVar1 == 0) {
    puVar2 = (uint *)(ulonglong)*(uint *)(uVar3 + 8);
    uVar1 = *puVar2 & 0xffffffeb | 8;
  }
  else {
    if (uVar1 != 0x200) {
      if (uVar1 == 0x300) {
        *(uint *)(ulonglong)*(uint *)(uVar3 + 8) =
             *(uint *)(ulonglong)*(uint *)(uVar3 + 8) & 0xffffffe3;
      }
      goto LAB_1408d8f7d;
    }
    puVar2 = (uint *)(ulonglong)*(uint *)(uVar3 + 8);
    uVar1 = *puVar2 & 0xffffffe7 | 4;
  }
  *puVar2 = uVar1;
LAB_1408d8f7d:
  puVar2 = (uint *)(ulonglong)*(uint *)(uVar3 + 8);
  uVar1 = *(uint *)(uVar3 + 0x1c);
  *puVar2 = *puVar2 ^ (*(int *)(uVar3 + 0x14) << 5 ^ *puVar2) & 0x1ffe0;
  puVar2 = (uint *)((ulonglong)*(uint *)(uVar3 + 8) + 0x20);
  *puVar2 = *puVar2 | 1;
  if (*(int *)(uVar3 + 0x20) == 0) {
    *(uint *)((ulonglong)*(uint *)(uVar3 + 8) + 0x20) =
         *(uint *)((ulonglong)*(uint *)(uVar3 + 8) + 0x20) & 0xffffffe3 | 2;
    *(undefined8 *)((ulonglong)*(uint *)(uVar3 + 8) + 0x10) =
         *(undefined8 *)(ulonglong)*(uint *)(uVar3 + 0x18);
    puVar2 = (uint *)((ulonglong)*(uint *)(uVar3 + 8) + 0x60);
    *puVar2 = *puVar2 | 1;
    *(uint *)((ulonglong)*(uint *)(uVar3 + 8) + 0x60) =
         *(uint *)((ulonglong)*(uint *)(uVar3 + 8) + 0x60) & 0xffffffe3 | 2;
    *(undefined8 *)((ulonglong)*(uint *)(uVar3 + 8) + 0x50) = *(undefined8 *)(ulonglong)uVar1;
  }
  else {
    puVar2 = (uint *)((ulonglong)*(uint *)(uVar3 + 8) + 0x20);
    *puVar2 = *puVar2 & 0xffffffe1;
    *(undefined4 *)((ulonglong)*(uint *)(uVar3 + 8) + 0x10) =
         *(undefined4 *)(ulonglong)*(uint *)(uVar3 + 0x18);
    puVar2 = (uint *)((ulonglong)*(uint *)(uVar3 + 8) + 0x60);
    *puVar2 = *puVar2 | 1;
    puVar2 = (uint *)((ulonglong)*(uint *)(uVar3 + 8) + 0x60);
    *puVar2 = *puVar2 & 0xffffffe1;
    *(undefined4 *)((ulonglong)*(uint *)(uVar3 + 8) + 0x50) = *(undefined4 *)(ulonglong)uVar1;
  }
  FUN_1408d9100();
  (*_DAT_150c37092)();
  puVar2 = (uint *)(ulonglong)*(uint *)(uVar3 + 8);
  if ((puVar2[2] & 0x10) != 0) {
    *puVar4 = *puVar4 & 0xfffffffe;
  }
  if ((puVar2[2] & 8) != 0) {
    *puVar4 = *puVar4 & 0xfffffffb;
  }
  if ((puVar2[2] & 4) != 0) {
    *puVar4 = *puVar4 & 0xfffffff7;
  }
  if ((puVar2[2] & 2) != 0) {
    *puVar4 = *puVar4 & 0xffffffef;
  }
  if ((puVar2[2] & 1) != 0) {
    *puVar4 = *puVar4 & 0xffffffdf;
  }
                    /* WARNING: Could not emulate address calculation at 0x0001408d9053 */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((ulonglong)(*puVar2 & 3) * 4 + 0x10281214))();
  return;
}

