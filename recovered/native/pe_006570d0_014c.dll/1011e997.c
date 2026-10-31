/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1011e997 */

void FUN_1011e997(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  int local_24;
  int local_20;
  undefined8 local_1c;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_24;
  local_24 = FUN_1010330d();
  iVar4 = FUN_10111f14();
  if (*(int *)(iVar4 + 0x18) == 0) {
    pcVar5 = "<unknown>";
  }
  else {
    pcVar5 = (char *)**(undefined4 **)(iVar4 + 0x20);
  }
  cVar3 = FUN_10132c48(param_1,pcVar5,0);
  if (cVar3 != '\0') {
    iVar1 = *(int *)(*(int *)(local_24 + 0x2c) + 0x54);
    if (iVar1 != 0) {
      local_20 = *(int *)(*(int *)(local_24 + 0x2c) + 0x5c);
      iVar6 = 0;
      do {
        iVar2 = *(int *)(local_20 + iVar6);
        FUN_101132aa(iVar2);
        local_1c = 0;
        if (*(int *)(iVar2 + 0x18) == 0) {
          pcVar5 = "<unknown>";
        }
        else {
          pcVar5 = (char *)**(undefined4 **)(iVar2 + 0x20);
        }
        cVar3 = FUN_10133727(pcVar5,iVar2 == iVar4,0x40,&local_1c);
        if (cVar3 != '\0') {
          *(int *)(local_24 + 0x30) = iVar2;
        }
        if (iVar2 == iVar4) {
          FUN_1011262c();
        }
        FUN_10113568();
        iVar6 = iVar6 + 4;
      } while (iVar1 << 2 != iVar6);
    }
    FUN_101334a7();
  }
  FUN_10114a0e(0,0xbf800000);
  FUN_1011eaad();
  if (DAT_10388d00 == (local_14 ^ (uint)&local_24)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

