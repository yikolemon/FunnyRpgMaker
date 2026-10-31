/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100f7832 */

undefined4 FUN_100f7832(void)

{
  int *piVar1;
  undefined4 *puVar2;
  DWORD DVar3;
  DWORD DVar4;
  undefined4 uVar5;
  int *piVar6;
  DWORD local_24;
  int *local_20;
  undefined1 *local_1c;
  void *local_18;
  undefined1 *local_14;
  undefined4 local_10;
  
  DVar3 = DAT_1039d6c0;
  local_1c = (undefined1 *)&local_24;
  local_10 = 0xffffffff;
  local_14 = &LAB_100f8990;
  local_18 = ExceptionList;
  ExceptionList = &local_18;
  DVar4 = GetCurrentThreadId();
  uVar5 = 0x10dd;
  if (DVar3 == DVar4) {
    if (DAT_1039d6c4 != (int *)0x0) {
      piVar6 = DAT_1039d6c4;
      do {
        VirtualProtect((LPVOID)piVar6[3],(uint)*(byte *)(piVar6[4] + 0x36),piVar6[5],&local_24);
        if ((piVar6[1] == 0) && (piVar6[4] != 0)) {
          FUN_100f7976();
          piVar6[4] = 0;
        }
        piVar1 = (int *)*piVar6;
        local_10 = 0xffffffff;
        local_20 = piVar6;
        FUN_102283a0(piVar6,0x18);
        piVar6 = piVar1;
      } while (piVar1 != (int *)0x0);
    }
    DAT_1039d6c4 = (int *)0x0;
    FUN_100f79a1();
    puVar2 = DAT_1039d6c8;
    while (puVar2 != (undefined4 *)0x0) {
      local_20 = puVar2;
      ResumeThread((HANDLE)puVar2[1]);
      puVar2 = (undefined4 *)*puVar2;
      local_10 = 0xffffffff;
      FUN_102283a0(local_20,8);
    }
    uVar5 = 0;
    DAT_1039d6c8 = (undefined4 *)0x0;
    DAT_1039d6c0 = 0;
  }
  ExceptionList = local_18;
  return uVar5;
}

