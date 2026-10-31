/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400c103b */

void FUN_1400c103b(longlong param_1)

{
  undefined4 *puVar1;
  char cVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined *puVar5;
  int *piVar6;
  float fVar7;
  undefined1 auStack_88 [32];
  int local_68;
  int local_60;
  int local_58;
  int local_50;
  longlong local_48;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_140f17b40 ^ (ulonglong)auStack_88;
  puVar1 = *(undefined4 **)(param_1 + 8);
  FUN_1400abfd5("ID: 0x%08X, ActiveID: 0x%08X",*(undefined4 *)(param_1 + 0x14),
                *(undefined4 *)(DAT_140f2a910 + 0x167c));
  FUN_1400a2c94(*(undefined4 *)(param_1 + 0x14));
  local_68 = puVar1[1];
  local_60 = puVar1[2];
  if ((*(byte *)(param_1 + 0x13) & 1) == 0) {
    puVar5 = &DAT_140edcdbf;
  }
  else {
    puVar5 = &DAT_140ed8f40;
    if (*(char *)(param_1 + 0x76) == '\0') {
      puVar5 = &DAT_140ed8f78;
    }
  }
  FUN_1400abfd5("TextLen: %d, Cursor: %d%s, Selection: %d..%d",*(undefined4 *)(param_1 + 0x18),
                *puVar1,puVar5);
  FUN_1400abfd5("BufCapacity: %d, LineCount: %d",*(undefined4 *)(param_1 + 0x58),
                *(undefined4 *)(param_1 + 100));
  FUN_1400abfd5("(Internal Buffer: TextA Size: %d, Capacity: %d)",*(undefined4 *)(param_1 + 0x28),
                *(undefined4 *)(param_1 + 0x2c));
  FUN_1400abfd5("has_preferred_x: %d (%.2f)",*(undefined1 *)((longlong)puVar1 + 0x16),
                (double)(float)puVar1[7]);
  local_68 = puVar1[0x290];
  FUN_1400abfd5("undo_point: %d, redo_point: %d, undo_char_point: %d, redo_char_point: %d",
                (int)*(short *)(puVar1 + 0x28e),(int)*(short *)((longlong)puVar1 + 0xa3a),
                puVar1[0x28f]);
  fVar7 = (float)FUN_14008ff20();
  local_38 = (ulonglong)(uint)(fVar7 * DAT_1401c86d0) << 0x20;
  cVar2 = FUN_14008a029("undopoints",&local_38,9,0);
  if (cVar2 != '\0') {
    local_38 = 0;
    FUN_14007ae77(0xe);
    piVar6 = puVar1 + 0xb;
    uVar4 = 0;
    do {
      uVar3 = 0x75;
      if (((longlong)uVar4 < (longlong)*(short *)(puVar1 + 0x28e)) ||
         (uVar3 = 0x72, (longlong)*(short *)((longlong)puVar1 + 0xa3a) <= (longlong)uVar4)) {
        local_58 = *piVar6;
        if (local_58 == -1) {
          local_50 = 0;
          local_58 = -1;
        }
        else {
          local_50 = piVar6[-2];
        }
        local_48 = (longlong)puVar1 + (longlong)local_58 + 0x650;
        local_60 = piVar6[-1];
        local_68 = piVar6[-2];
        FUN_1400abfd5("%c [%02d] where %03d, insert %03d, delete %03d, char_storage %03d \"%.*s\"",
                      uVar3,uVar4 & 0xffffffff,piVar6[-3]);
      }
      else {
        FUN_14008f898(1);
        local_58 = *piVar6;
        local_48 = (longlong)puVar1 + (longlong)local_58 + 0x650;
        local_60 = piVar6[-1];
        local_68 = piVar6[-2];
        local_50 = 0;
        FUN_1400abfd5("%c [%02d] where %03d, insert %03d, delete %03d, char_storage %03d \"%.*s\"",
                      0x20,uVar4 & 0xffffffff,piVar6[-3]);
        FUN_14008f98e();
      }
      uVar4 = uVar4 + 1;
      piVar6 = piVar6 + 4;
    } while (uVar4 != 99);
    FUN_14007af87(1);
  }
  FUN_14008a651();
  if (DAT_140f17b40 == (local_30 ^ (ulonglong)auStack_88)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_30 ^ (ulonglong)auStack_88);
}

