#include "global.h"
#include "debug.h"
#include "sound.h"
#include "field_control_avatar.h"
#include "constants/songs.h"

void FieldGetPlayerInput_Patch(struct FieldInput* input, u16 newKeys, u16 heldKeys)
{
    FieldGetPlayerInput(input, newKeys, heldKeys);

    if (heldKeys & L_BUTTON && heldKeys & R_BUTTON)
        input->input_field_1_2 = TRUE;
}

int ProcessPlayerFieldInput_Patch(struct FieldInput* input)
{
    int result = ProcessPlayerFieldInput(input);

    if (input->input_field_1_2)
    {
        PlaySE(SE_WIN_OPEN);
        Debug_ShowMainMenu();
        return TRUE;
    }

    return result;
}