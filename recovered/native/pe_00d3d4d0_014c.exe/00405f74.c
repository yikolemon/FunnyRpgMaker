/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00405f74 */

void __thiscall FUN_00405f74(void *this,uint param_1,char param_2)

{
  uint uVar1;
  char *pcVar2;
  uint *puVar3;
  undefined4 local_28;
  undefined **local_24;
  int local_20 [5];
  uint local_c;
  
  local_c = DAT_0050e8c0 ^ (uint)&local_28;
  *(uint *)((int)this + 0xc) = param_1 & 0x17;
  uVar1 = param_1 & 0x17 & *(uint *)((int)this + 0x10);
  if (uVar1 != 0) {
    if (param_2 != '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_00484ff0((int *)0x0,(byte *)0x0);
    }
    pcVar2 = "ios_base::failbit set";
    if ((uVar1 & 2) == 0) {
      pcVar2 = "ios_base::eofbit set";
    }
    puVar3 = (uint *)"ios_base::badbit set";
    if ((uVar1 & 4) == 0) {
      puVar3 = (uint *)pcVar2;
    }
    local_24 = FUN_00406209();
    local_28 = 1;
    FUN_00406008(puVar3,&local_28);
                    /* WARNING: Subroutine does not return */
    FUN_00484ff0(local_20,&DAT_005098e8);
  }
  if (DAT_0050e8c0 == (local_c ^ (uint)&local_28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0047f2c0(local_c ^ (uint)&local_28);
}

