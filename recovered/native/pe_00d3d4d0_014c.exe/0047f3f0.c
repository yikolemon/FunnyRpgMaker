/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0047f3f0 */

uint * __cdecl FUN_0047f3f0(int param_1,char *param_2)

{
  char *pcVar1;
  wchar_t *pwVar2;
  uint uVar3;
  wchar_t *pwVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  ulonglong uVar8;
  
  pwVar4 = __wsetlocale(0,(wchar_t *)0x0);
  pwVar2 = *(wchar_t **)(param_1 + 0x24);
  if (pwVar2 != pwVar4) {
    if (pwVar2 != (wchar_t *)0x0) {
      thunk_FUN_00495f00(pwVar2);
    }
    *(undefined4 *)(param_1 + 0x24) = 0;
    if (pwVar4 != (wchar_t *)0x0) {
      puVar5 = FUN_0047f7c0((uint *)pwVar4);
      *(uint **)(param_1 + 0x24) = puVar5;
    }
  }
  puVar5 = (uint *)0x0;
  if (param_2 != (char *)0x0) {
    puVar5 = (uint *)_setlocale(0,param_2);
  }
  puVar7 = (uint *)&DAT_00505c38;
  if (puVar5 != (uint *)0x0) {
    puVar7 = puVar5;
  }
  puVar5 = *(uint **)(param_1 + 0x2c);
  if (puVar5 != puVar7) {
    if (puVar5 != (uint *)0x0) {
      thunk_FUN_00495f00(puVar5);
    }
    *(undefined4 *)(param_1 + 0x2c) = 0;
    puVar5 = puVar7;
    do {
      uVar3 = *puVar5;
      puVar5 = (uint *)((int)puVar5 + 1);
    } while ((char)uVar3 != '\0');
    pcVar1 = (char *)((int)puVar5 + (1 - ((int)puVar7 + 1)));
    puVar6 = (uint *)FUN_004924d0((SIZE_T)pcVar1);
    puVar5 = (uint *)0x0;
    if (puVar6 != (uint *)0x0) {
      uVar8 = FUN_004878c0(puVar6,puVar7,(uint)pcVar1);
      puVar5 = (uint *)uVar8;
    }
    *(uint **)(param_1 + 0x2c) = puVar6;
  }
  return puVar5;
}

